// name: FUN_10016c10a
// address: 10016c10a

void FUN_10016c10a(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long *unaff_RBX;
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == 'n') {
    *param_2 = (long)(pcVar1 + 2);
    unaff_RBX = param_2;
    if (((pcVar1[1] == 'u') && (*param_2 = (long)(pcVar1 + 3), pcVar1[2] == 'l')) &&
       (*param_2 = (long)(pcVar1 + 4), pcVar1[3] == 'l')) {
      return;
    }
  }
  else {
    FUN_100678fb1();
  }
  uVar2 = ___cxa_allocate_exception(0x20);
  FUN_10016c052(uVar2,3,"kParseErrorValueInvalid",~unaff_RBX[1] + *unaff_RBX);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar2,&PTR_DAT_10083c098,FUN_10016c08a);
}

