
def dfs(verts, afj, s):
  vis = [s]
  q = adj[s].copy()
  while len(q) > 0:
    p = q.pop()
    for c in adj[p]:
      if c not in vis:
        q.append(c)
        vis.append(c)
  return vis


def bfs(verts, adj, s):
  vis = [s]
  q = adj[s].copy()
  while len(q) > 0:
    p = q.pop(0)
    for c in adj[p]:
      if c not in vis:
        q.append(c)
        vis.append(c)
  return vis

if __name__ == "__main__":
  verts = [1, 2, 3, 4]
  adj = {
    1: [2, 3],
    2: [1, 3],
    3: [1, 2, 4],
    4: [3]
  }

  print("bfs:", bfs(verts, adj, 1))
  print("dfs:", dfs(verts, adj, 1))
  
