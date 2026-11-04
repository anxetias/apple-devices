// name: FUN_1004c3ef0
// address: 1004c3ef0

undefined8 FUN_1004c3ef0(long param_1,int param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0x73747064) {
    lVar1 = *param_3;
    uVar3 = 0;
    if (lVar1 != *(long *)(param_1 + 0x5e8)) {
      FUN_10017060f();
      uVar2 = FUN_1001705fc(lVar1);
      *(undefined8 *)(param_1 + 0x5e8) = uVar2;
      uVar3 = 0;
      if (*(long *)(param_1 + 0x4f0) != 0) {
        FUN_10043e3da(*(long *)(param_1 + 0x4f0),uVar2);
      }
    }
  }
  else {
    uVar3 = 0x232a;
    if (param_2 == 0x73746b69) {
      lVar1 = *param_3;
      FUN_1001705fc(lVar1);
      FUN_10017060f(*(undefined8 *)(param_1 + 0x5e0));
      *(long *)(param_1 + 0x5e0) = lVar1;
      uVar3 = 0;
      if (*(long *)(param_1 + 0x4f0) != 0) {
        FUN_100446d0e(*(long *)(param_1 + 0x4f0),lVar1);
      }
    }
  }
  return uVar3;
}

