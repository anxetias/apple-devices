// name: FUN_1004c3c98
// address: 1004c3c98

undefined8 FUN_1004c3c98(long param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffffffce;
  if (*(long **)(param_1 + 0x550) != (long *)0x0) {
    lVar2 = (**(code **)(**(long **)(param_1 + 0x550) + 0x70))();
    if (lVar2 != 0) {
      iVar1 = FUN_100176de6(lVar2,param_2);
      *param_3 = iVar1;
      if (iVar1 != -1) {
        uVar3 = 0;
        FUN_10017610a(lVar2,iVar1,0x6e616d65,0,0x200,param_3 + 1);
      }
    }
  }
  return uVar3;
}

