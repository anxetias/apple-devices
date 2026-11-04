// name: FUN_1002310ff
// address: 1002310ff

undefined2 FUN_1002310ff(undefined8 param_1)

{
  ID IVar1;
  long lVar2;
  ulong uVar3;
  undefined2 uVar4;
  
  uVar4 = 0;
  IVar1 = BKBookKitBook::bookWithBookMetadata_error_
                    ((ID)PTR__OBJC_CLASS___BKBookKitBook_10082bab8,
                     PTR_s_bookWithBookMetadata_error__10088c438,param_1,0);
  lVar2 = _objc_retainAutoreleasedReturnValue(IVar1);
  if (lVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(lVar2,PTR_s_contentType_10088c440);
    if (uVar3 < 8) {
      uVar4 = *(undefined2 *)(&DAT_100718f20 + uVar3 * 2);
    }
    else {
      uVar4 = 0;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar2);
  return uVar4;
}

