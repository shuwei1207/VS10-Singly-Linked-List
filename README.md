新增、查詢、刪除單向環狀串列 (singly linked list) 中的節點元素

0.    維護一個開頭空白節點於環狀串列最前方
1.    依序印出環狀串列中所有元素（不含開頭空白節點元素；此程序應在以下各項要求中呼叫，以確定該要求確實達成）(Print List)
2.    新增一元素 element
2.1        於開頭節點之後，使其成為環狀串列的第一個元素 (Insert as first)
2.2        使其為環狀串列的最後一個元素 (Insert as last)
             （利用一 last 指標固定指向串列中最後一個節點, 新節點直接加至其後）
3.    搜尋元素 target 是否存在於環狀串列中 (Find target)
3.1        找到或找不到，皆印出適當訊息
3.2        於其後新增一元素 element（若找不到, 應印出適當訊息）(Find target and insert element after target)
3.3        於其前新增一元素 element（若找不到, 應印出適當訊息）(Find target and insert element before target)
3.4        刪除所找到的 target元素 (Delete target)
4.    新增 n 個節點（各含一個亂數、可指定亂數範圍）至環狀串列之最後 (Randomly insert n element)
5.    清除所有節點（不含開頭空白節點）並歸還記憶空間 

[B]   Implementing Linked Stack (push, pop)  
[C]   Implementing Linked Queue (insertQ, deleteQ)   
