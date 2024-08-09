from datetime import datetime, timedelta

def next_date(year, month, day):
    try:
        current_date = datetime(year, month, day)
        next_day = current_date + timedelta(days=1)
        return next_day.year, next_day.month, next_day.day
    except ValueError as e:
        return str(e)
print(next_date(2023, 12, 31))  
print(next_date(2023, 2, 28))  