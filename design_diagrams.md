# Design Diagrams for Stacks

## Stack Class Diagram
```
Stack
- data: vector<int>
+ push(value: int): void
+ pop(): void
+ top(): int
+ empty(): bool
+ size(): size_t
```

## LIFO Illustration
```
Push 1: [1]
Push 2: [1, 2]
Push 3: [1, 2, 3]
Top: 3
Pop: [1, 2]
Top: 2
```

## Operations Flowchart
- Push: Add to end of vector
- Pop: Remove from end (if not empty)
- Top: Return last element (if not empty)
- Empty: Check vector size == 0
- Size: Return vector size
