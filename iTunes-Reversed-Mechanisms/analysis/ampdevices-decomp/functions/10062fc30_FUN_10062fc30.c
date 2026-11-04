// name: FUN_10062fc30
// address: 10062fc30

void FUN_10062fc30(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffffffffffe4;
  }
  else {
    lVar1 = FUN_10048b5ec();
    if (lVar1 != 0) {
      uVar2 = FUN_10062f5e0(lVar1);
      puVar3 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar2);
      goto LAB_10062fccb;
    }
    uVar2 = 0xffffffffffffffd5;
  }
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSError_10082c660,
                     PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                     *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,uVar2,0);
  lVar1 = _objc_retainAutoreleasedReturnValue(uVar2);
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    if ((param_3 != (long *)0x0) && (*param_3 == 0)) {
      lVar4 = _objc_retainAutorelease(lVar1);
      *param_3 = lVar4;
    }
    (*(code *)PTR__objc_release_10082c7b0)(lVar1);
    puVar3 = PTR____NSArray0__struct_10082dfe8;
  }
LAB_10062fccb:
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

