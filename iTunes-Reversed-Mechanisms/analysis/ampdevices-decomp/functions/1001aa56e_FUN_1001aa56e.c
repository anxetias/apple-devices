// name: FUN_1001aa56e
// address: 1001aa56e

void FUN_1001aa56e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined8 local_38;
  
  *param_1 = 0;
  FUN_1001aa1ba(local_58,param_5);
  cVar1 = FUN_1001b8428(param_4);
  if (cVar1 == '\0') {
    FUN_1001aaef6(local_48,*(undefined8 *)PTR__kCFErrorLocalizedDescriptionKey_10082e090);
    FUN_1001a7bac(&local_38,local_48);
    FUN_1001aaf14(local_40,param_4);
    FUN_10014814a(local_58,&local_38,local_40);
    FUN_1001ab006(local_40);
    FUN_1001ab240(&local_38);
    FUN_1001ab006(local_48);
  }
  uVar2 = DAT_1008c4d98;
  local_38 = FUN_1001b8d0c(param_2);
  uVar2 = _CFErrorCreate(uVar2,local_38,param_3,*param_5);
  *param_1 = uVar2;
  FUN_10016d588(&local_38);
  FUN_1001a8fac(local_58);
  return;
}

