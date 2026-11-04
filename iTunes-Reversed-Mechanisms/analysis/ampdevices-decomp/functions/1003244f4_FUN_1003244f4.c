// name: FUN_1003244f4
// address: 1003244f4

undefined8 FUN_1003244f4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = FUN_1004744bf(uVar2,0);
  if ((uVar1 & 0x10090) == 0) {
    **(undefined8 **)(param_1 + 8) = uVar2;
  }
  uVar2 = 0x2349;
  if (**(long **)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

