// name: FUN_1001b5c68
// address: 1001b5c68

undefined8 FUN_1001b5c68(long param_1,undefined8 param_2,int param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  IVar1 = _objc_alloc(PTR__OBJC_CLASS___NSImage_10082d310);
  ppuVar3 = &PTR_s_initWithDataIgnoringOrientation__10088c280;
  if (param_3 != 0) {
    ppuVar3 = &PTR_s_initWithData__10088c278;
  }
  IVar1 = NSImage::initWithData_(IVar1,*ppuVar3,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(ID *)(param_1 + 0x48) = IVar1;
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  uVar2 = 0xffffffce;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

