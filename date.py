import time
from datetime import datetime

start_time = datetime.now()
print(f"⏱️ 计时开始：{start_time.strftime('%Y-%m-%d %H:%M:%S')}")
print("按任意键结束计时...")
input()
end_time = datetime.now()
elapsed = end_time - start_time
print(f"⏱️ 计时结束：{end_time.strftime('%Y-%m-%d %H:%M:%S')}")
print(f"⏰ 用时：{elapsed}")



# 计时功能