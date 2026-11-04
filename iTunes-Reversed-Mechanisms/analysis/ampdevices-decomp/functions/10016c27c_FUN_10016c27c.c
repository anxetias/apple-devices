// name: FUN_10016c27c
// address: 10016c27c

void FUN_10016c27c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long *unaff_RBX;
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == 'f') {
    *param_2 = (long)(pcVar1 + 2);
    unaff_RBX = param_2;
    if (((pcVar1[1] == 'a') && (*param_2 = (long)(pcVar1 + 3), pcVar1[2] == 'l')) &&
       (*param_2 = (long)(pcVar1 + 4), pcVar1[3] == 's')) {
      *param_2 = (long)(pcVar1 + 5);
      if (pcVar1[4] == 'e') {
        cVar2 = FUN_10016b236(param_3,*(undefined8 *)PTR__kCFBooleanFalse_10082e030);
        if (cVar2 != '\0') {
          return;
        }
        uVar3 = ___cxa_allocate_exception(0x20);
        FUN_10016c052(uVar3,0x10,"kParseErrorTermination",*param_2 - param_2[1]);
        goto LAB_10016c30d;
      }
    }
  }
  else {
    FUN_100678ff7();
  }
  uVar3 = ___cxa_allocate_exception(0x20);
  FUN_10016c052(uVar3,3,"kParseErrorValueInvalid",~unaff_RBX[1] + *unaff_RBX);
LAB_10016c30d:
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar3,&PTR_DAT_10083c098,FUN_10016c08a);
}

