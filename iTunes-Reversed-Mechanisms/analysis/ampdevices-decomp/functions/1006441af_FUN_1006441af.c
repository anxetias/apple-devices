// name: FUN_1006441af
// address: 1006441af

int FUN_1006441af(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined2 *param_5
                 )

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(*(undefined8 *)(param_1 + 0x10));
  if (param_2 == 0x7570726d) {
    if (param_5 == (undefined2 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithCharacters_length__10088d820,param_5 + 1,*param_5);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar2,PTR_s_updateClientProgressWithTotalUni_10088df48,param_4,param_3,uVar3);
    if (param_5 != (undefined2 *)0x0) {
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    }
  }
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_isCancelled_10088d9d8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return (uint)(cVar1 == '\0') * 0x80 + -0x80;
}

