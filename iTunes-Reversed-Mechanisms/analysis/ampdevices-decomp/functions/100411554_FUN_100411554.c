// name: FUN_100411554
// address: 100411554

undefined8
FUN_100411554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                    (param_2,PTR_s_isEqualToString__10088bb98,&cf_com_apple_Photos_RootGroup);
  if (cVar1 == '\0') {
    uVar2 = 0x6be;
  }
  else {
    *param_4 = 1;
    uVar2 = 0;
  }
  return uVar2;
}

