LONGEST INCREASING SUBSEQUENCE

## ALGORITHM
input array of size n

lis[n]:= 1,1,1,1,....,1;
for i=2...n do
 for j=1....i-1 do
  if array[i]>array[j] AND lis[i]<=lis[j] then
    lis[i]:=lis[j]+1;
   end
  end
end
return MAX(lis[0],lis[1],...,lis[n]);


## COMPLEXITY

## Complexity
- Time:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))
    - Average Case: ![formula](https://render.githubusercontent.com/render/math?math=\Theta(n^2))
    - Best Case: ![formula](https://render.githubusercontent.com/render/math?math=\Omega(n^2))
- Space:
    - Worst Case: ![formula](https://render.githubusercontent.com/render/math?math=O(n^2))

