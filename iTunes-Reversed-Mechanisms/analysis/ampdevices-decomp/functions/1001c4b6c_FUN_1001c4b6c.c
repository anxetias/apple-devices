// name: FUN_1001c4b6c
// address: 1001c4b6c

undefined8 FUN_1001c4b6c(undefined4 *param_1)

{
  undefined8 uVar1;
  
  FUN_1001c62d9(param_1,0x40);
  *param_1 = 0x6d656d62;
  uVar1 = FUN_1001c63e1(0x20000);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return 0;
}

