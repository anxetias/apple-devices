// name: FUN_1001b57ce
// address: 1001b57ce

undefined1  [16] FUN_1001b57ce(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  if (*(long *)(param_3 + 0x48) != 0) {
    auVar1._0_8_ = (*(code *)PTR__objc_msgSend_10082c770)
                             (*(long *)(param_3 + 0x48),PTR_s_size_10088c220);
    auVar1._8_8_ = param_2;
    return auVar1;
  }
  return *(undefined1 (*) [16])PTR__CGSizeZero_10082e370;
}

