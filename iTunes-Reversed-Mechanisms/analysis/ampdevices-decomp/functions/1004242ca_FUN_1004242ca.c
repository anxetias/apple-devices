// name: FUN_1004242ca
// address: 1004242ca

void FUN_1004242ca(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x1300) == 6) && (*(char *)(param_1 + 0x1358) == '\x01')) {
    uVar1 = FUN_1005e9a2c();
    FUN_1005edc94(uVar1,param_2);
  }
  else {
    FUN_10041c7bc(param_1,0x10e1,param_2,0);
  }
  FUN_1001ceee0(param_1);
  FUN_10039c7eb(0);
  return;
}

