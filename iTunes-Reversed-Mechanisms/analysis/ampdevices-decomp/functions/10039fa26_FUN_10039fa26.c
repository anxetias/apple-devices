// name: FUN_10039fa26
// address: 10039fa26

void FUN_10039fa26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = param_3;
  uVar3 = _CFStringGetLength(param_2);
  uVar4 = _CFAllocatorAllocate(param_1,uVar3 * 2,0);
  _CFStringGetCharacters(param_2,0,uVar3,uVar4);
  iVar1 = _ucol_getSortKey(param_3,uVar4,uVar3 & 0xffffffff,0,0);
  uVar5 = _CFAllocatorAllocate(param_1,(long)iVar1,0);
  uVar2 = _ucol_getSortKey(local_38,uVar4,uVar3 & 0xffffffff,uVar5,iVar1);
  _CFAllocatorDeallocate(param_1,uVar4);
  local_3c = 0;
  iVar1 = _ucol_getBound(uVar5,uVar2,0,1,0,0,&local_3c);
  _CFDataCreateWithBytesNoCopy(param_1,uVar5,(long)iVar1,param_1);
  return;
}

