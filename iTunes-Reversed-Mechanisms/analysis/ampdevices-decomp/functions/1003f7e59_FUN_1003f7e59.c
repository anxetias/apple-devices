// name: FUN_1003f7e59
// address: 1003f7e59

void FUN_1003f7e59(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_4 == 2) {
    uVar2 = FUN_1001b83ae(param_2);
    iVar1 = FUN_1001b83f0(param_2);
    uVar3 = 2;
    param_4 = 2;
  }
  else {
    uVar2 = FUN_1001b8336(param_2);
    iVar1 = FUN_1001b8378(param_2);
    iVar1 = iVar1 * 2;
    uVar3 = 1;
  }
  FUN_1003f3360(param_1,uVar2,iVar1,param_3,uVar3,param_4,param_5);
  return;
}

