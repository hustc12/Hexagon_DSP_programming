import torch
matA = torch.tensor([[1,2,3],[2,3,4]])
matB = torch.tensor([[1,2,3,4],[2,3,4,5],[3,4,5,6]])
out = matA@matB
print(out)
