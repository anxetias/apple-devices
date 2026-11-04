// name: FUN_100643f7e
// address: 100643f7e

bool FUN_100643f7e(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  uVar1 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_scheme_10088d968);
  lVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    lVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (lVar2,PTR_s_caseInsensitiveCompare__10088d5c0,&cf_afc);
    bVar4 = lVar3 == 0;
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar2);
  return bVar4;
}

