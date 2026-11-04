// name: FUN_1004cd4a7
// address: 1004cd4a7

undefined8 FUN_1004cd4a7(int param_1,undefined8 *param_2,void *param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0x636c7220) {
    uVar1 = 0;
    if (param_3 != (void *)0x0) {
      FUN_1001ea9a5(param_3,*(long *)((long)param_3 + 0x18) + 0x18);
      operator_delete(param_3);
    }
  }
  else {
    uVar1 = 0xfffffffc;
    if (param_1 == 0x696e6974) {
      *(undefined8 *)((long)param_3 + 8) = *param_2;
      *(undefined8 *)((long)param_3 + 0x10) = param_2[1];
      param_2[3] = param_3;
      *(undefined8 *)((long)param_3 + 0x20) = param_2[2];
      uVar1 = 0;
    }
  }
  return uVar1;
}

