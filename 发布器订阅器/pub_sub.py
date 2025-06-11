from typing import Dict, List, Callable

# ====================
# 消息代理（核心逻辑）
# ====================
class Broker:
    def __init__(self):
        self._subscribers: Dict[str, List[Callable]] = {}
    
    def subscribe(self, topic: str, callback: Callable) -> None:
        """订阅主题"""
        if topic not in self._subscribers:
            self._subscribers[topic] = []
        self._subscribers[topic].append(callback)
    
    def unsubscribe(self, topic: str, callback: Callable) -> None:
        """取消订阅"""
        if topic in self._subscribers:
            self._subscribers[topic].remove(callback)
    
    def publish(self, topic: str, message: str) -> None:
        """发布消息到指定主题"""
        if topic in self._subscribers:
            for callback in self._subscribers[topic]:
                callback(message)

# ====================
# 发布者类
# ====================
class Publisher:
    def __init__(self, broker: Broker):
        self.broker = broker
    
    def send_message(self, topic: str, message: str) -> None:
        """发布消息"""
        print(f"[Publisher] 发布主题 '{topic}': {message}")
        self.broker.publish(topic, message)

# ====================
# 订阅者类
# ====================
class Subscriber:
    def __init__(self, name: str, broker: Broker):
        self.name = name
        self.broker = broker
    
    def on_message(self, message: str) -> None:
        """消息处理回调"""
        print(f"[Subscriber {self.name}] 收到消息: {message}")
    
    def listen_to(self, topic: str) -> None:
        """订阅主题"""
        self.broker.subscribe(topic, self.on_message)
    
    def stop_listen(self, topic: str) -> None:
        """停止订阅"""
        self.broker.unsubscribe(topic, self.on_message)

# ====================
# 使用示例
# ====================
if __name__ == "__main__":
    # 1. 创建消息代理
    broker = Broker()
    
    # 2. 创建发布者
    publisher = Publisher(broker)
    
    # 3. 创建订阅者并订阅主题
    subscriber1 = Subscriber("用户A", broker)
    subscriber1.listen_to("news")
    subscriber1.listen_to("weather")
    
    subscriber2 = Subscriber("用户B", broker)
    subscriber2.listen_to("sports")
    
    # 4. 发布消息测试
    publisher.send_message("news", "今日头条：AI技术突破")
    publisher.send_message("weather", "天气预报：明日晴朗")
    publisher.send_message("sports", "体育快讯：世界杯决赛")
    
    # 5. 取消订阅示例
    subscriber1.stop_listen("weather")
    publisher.send_message("weather", "更新：局部地区有雨")  # 订阅者A不再接收天气信息
