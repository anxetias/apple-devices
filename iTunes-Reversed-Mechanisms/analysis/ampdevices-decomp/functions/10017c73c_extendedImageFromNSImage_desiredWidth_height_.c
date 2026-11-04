// name: extendedImageFromNSImage:desiredWidth:height:
// address: 10017c73c

/* Function Stack Size: 0x28 bytes */

ID ExtendAdornerFactory::extendedImageFromNSImage_desiredWidth_height_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
             unsigned_long_long param_5)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  
  lVar1 = FUN_10017c529(param_3,param_4,param_5,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _objc_alloc(PTR__OBJC_CLASS___NSImage_10082d310);
    uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)PTR__NSZeroSize_10082c630,
                       *(undefined8 *)(PTR__NSZeroSize_10082c630 + 8),uVar2,
                       PTR_s_initWithCGImage_size__10088bf70,lVar1);
    _CFRelease(lVar1);
  }
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

