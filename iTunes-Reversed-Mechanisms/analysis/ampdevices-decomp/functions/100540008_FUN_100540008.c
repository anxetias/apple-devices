// name: FUN_100540008
// address: 100540008

void FUN_100540008(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x4d8) = 0;
  if ((0.0 < *(double *)(param_1 + 0x4e0)) && (0.0 < *(double *)(param_1 + 0x4e8))) {
    *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_1 + 0x4e0);
    *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_1 + 0x4e8);
  }
  uVar1 = *(undefined8 *)(PTR__CGSizeZero_10082e370 + 8);
  *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)PTR__CGSizeZero_10082e370;
  *(undefined8 *)(param_1 + 0x4e8) = uVar1;
  return;
}

