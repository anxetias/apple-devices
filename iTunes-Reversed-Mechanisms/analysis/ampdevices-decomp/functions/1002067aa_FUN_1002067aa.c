// name: FUN_1002067aa
// address: 1002067aa

undefined8 FUN_1002067aa(long param_1,long param_2,int param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_30;
  
  uVar2 = FUN_1001c4cf4(*(undefined8 *)(param_1 + 0x28));
  uVar3 = 0x20a;
  if (param_4 < uVar2) {
    iVar1 = FUN_1001c5333(*(undefined8 *)(param_1 + 0x28),param_4 & 0xffffffff,param_2,(long)param_3
                          ,&local_30);
    uVar3 = 0;
    lVar4 = param_3 - local_30;
    if (lVar4 != 0) {
      ___bzero(param_2 + local_30,lVar4);
      uVar3 = 0x20a;
    }
    if ((iVar1 != -0x27) && (iVar1 != 0)) {
      uVar3 = 0x10a;
    }
  }
  return uVar3;
}

