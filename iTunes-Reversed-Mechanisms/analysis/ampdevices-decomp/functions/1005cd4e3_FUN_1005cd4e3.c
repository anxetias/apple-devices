// name: FUN_1005cd4e3
// address: 1005cd4e3

void FUN_1005cd4e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_70;
  long local_68;
  long *local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  uVar1 = FUN_100171409(0,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  FUN_1004c673f(local_50,param_2);
  FUN_1004c6788(local_40,param_2);
  FUN_1004c6801(&local_70,param_2);
  FUN_10016865a(uVar1,&cf_Message,local_50,0);
  FUN_10016865a(uVar1,&cf_Explanation,local_40,0);
  FUN_10016865a(uVar1,&cf_LearnMoreURL,param_3,0);
  if (local_70 != local_68) {
    uVar2 = FUN_1001bd34a(&local_70);
    FUN_100171502(uVar1,&cf_Details,uVar2);
    FUN_10017060f(uVar2);
  }
  FUN_1001709a5(param_1,uVar1);
  FUN_10017060f(uVar1);
  local_58 = &local_70;
  FUN_1001370f4();
  FUN_1001b7a50(local_40);
  FUN_1001b7a50(local_50);
  return;
}

