// name: FUN_10025ac53
// address: 10025ac53

void FUN_10025ac53(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  undefined1 local_1c [4];
  
  cVar2 = FUN_100164d80(param_1,local_1c);
  if (cVar2 != '\0') {
    lVar1 = FUN_100173bb7(param_1,*param_3,0x40);
    if (lVar1 == 1) {
      FUN_1001705fc(param_1);
      FUN_10017060f(*param_3);
      *param_3 = param_1;
    }
  }
  return;
}

