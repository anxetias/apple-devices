// name: FUN_1001ab0cc
// address: 1001ab0cc

ulong FUN_1001ab0cc(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  uVar3 = 1;
  if (lVar1 == 0) {
    uVar3 = (ulong)((lVar1 == 0 && lVar2 == 0) - 1);
  }
  if (lVar1 != 0 && lVar2 != 0) {
    uVar3 = _CFStringCompare(lVar1,lVar2,(long)param_3);
  }
  return uVar3;
}

