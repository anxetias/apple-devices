// name: FUN_10016c1a2
// address: 10016c1a2

void FUN_10016c1a2(undefined8 param_1,long *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long *unaff_R14;
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == 't') {
    *param_2 = (long)(pcVar1 + 2);
    unaff_R14 = param_2;
    if ((pcVar1[1] == 'r') && (*param_2 = (long)(pcVar1 + 3), pcVar1[2] == 'u')) {
      *param_2 = (long)(pcVar1 + 4);
      if (pcVar1[3] == 'e') {
        cVar2 = FUN_10016b236(param_3,*(undefined8 *)PTR__kCFBooleanTrue_10082e038);
        if (cVar2 != '\0') {
          return;
        }
        uVar3 = ___cxa_allocate_exception(0x20);
        FUN_10016c052(uVar3,0x10,"kParseErrorTermination",*param_2 - param_2[1]);
        goto LAB_10016c250;
      }
    }
  }
  else {
    FUN_100678fd4();
  }
  uVar3 = ___cxa_allocate_exception(0x20);
  FUN_10016c052(uVar3,3,"kParseErrorValueInvalid",~unaff_R14[1] + *unaff_R14);
LAB_10016c250:
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar3,&PTR_DAT_10083c098,FUN_10016c08a);
}

