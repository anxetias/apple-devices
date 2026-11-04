// name: FUN_1004c0c00
// address: 1004c0c00

undefined2 FUN_1004c0c00(long *param_1)

{
  undefined2 uVar1;
  
  (**(code **)(*param_1 + 0x310))(param_1,0);
  uVar1 = (**(code **)(*(long *)param_1[0xaa] + 0x28))();
  return uVar1;
}

