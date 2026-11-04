// name: FUN_100531572
// address: 100531572

void FUN_100531572(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_3,*(undefined4 *)param_2,1);
  if (iVar1 == 0) {
    *param_2 = 0;
  }
  return;
}

