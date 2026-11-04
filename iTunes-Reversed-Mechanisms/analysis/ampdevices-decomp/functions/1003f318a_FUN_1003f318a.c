// name: FUN_1003f318a
// address: 1003f318a

undefined8
FUN_1003f318a(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1001b8428(param_3);
  uVar3 = 0;
  if (cVar1 == '\0') {
    uVar3 = FUN_1001b83ae(param_3);
    uVar2 = FUN_1001b83f0(param_3);
    uVar3 = FUN_1003f3360(param_1,uVar3,uVar2,param_4,2,param_5,param_6);
    if ((int)uVar3 == 0) {
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      uVar3 = 0;
    }
  }
  return uVar3;
}

