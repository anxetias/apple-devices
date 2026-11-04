// name: FUN_10014fe2e
// address: 10014fe2e

void FUN_10014fe2e(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined1 local_30 [16];
  
  cVar1 = FUN_1001b8428(param_1 + 0x1c8);
  if (cVar1 == '\0') {
    FUN_1001b7eb0(local_30,PTR_cf_User_Agent_10083c510);
    (**(code **)(*param_3 + 0x10))(param_3,local_30,param_1 + 0x1c8);
    FUN_1001b7a50(local_30);
  }
  return;
}

