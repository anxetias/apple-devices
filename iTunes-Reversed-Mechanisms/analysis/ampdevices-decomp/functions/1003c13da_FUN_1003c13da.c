// name: FUN_1003c13da
// address: 1003c13da

undefined8 FUN_1003c13da(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)();
  uVar2 = _objc_retainAutorelease(uVar2);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_UTF8String_10088bf18);
  iVar1 = FUN_1004ddd6e(0,uVar3,1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100502206(iVar1);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return uVar3;
}

