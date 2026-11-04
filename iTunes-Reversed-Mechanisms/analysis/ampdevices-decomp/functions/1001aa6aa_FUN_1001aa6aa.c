// name: FUN_1001aa6aa
// address: 1001aa6aa

void FUN_1001aa6aa(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_58 [2];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined8 local_38;
  
  *param_1 = 0;
  FUN_10032f0f2(local_58);
  cVar1 = FUN_1001b8428(param_4);
  if (cVar1 == '\0') {
    FUN_1001aaef6(&local_38,*(undefined8 *)PTR__kCFErrorLocalizedDescriptionKey_10082e090);
    FUN_1001aaf14(local_48,param_4);
    FUN_1001a7bac(local_40,local_48);
    FUN_1001aa494(local_58,&local_38,local_40);
    FUN_1001ab240(local_40);
    FUN_1001ab006(local_48);
    FUN_1001ab006(&local_38);
  }
  if (*param_5 != 0) {
    FUN_1001aaef6(&local_38,*(undefined8 *)PTR__kCFErrorUnderlyingErrorKey_10082e0a8);
    FUN_1001a8bb0(local_40,*param_5);
    FUN_1001aa494(local_58,&local_38,local_40);
    FUN_1001ab240(local_40);
    FUN_1001ab006(&local_38);
  }
  uVar2 = DAT_1008c4d98;
  local_38 = FUN_1001b8d0c(param_2);
  uVar2 = _CFErrorCreate(uVar2,local_38,param_3,local_58[0]);
  *param_1 = uVar2;
  FUN_10016d588(&local_38);
  FUN_1001a8fac(local_58);
  return;
}

