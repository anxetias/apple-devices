// name: FUN_10014cd50
// address: 10014cd50

undefined8 FUN_10014cd50(undefined8 param_1)

{
  char cVar1;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  FUN_10032f0f2();
  cVar1 = FUN_10014cc70();
  if (cVar1 == '\0') {
    FUN_1001aaf3c(local_28,PTR_s_X_Apple_TID_State_10088f4e8);
    FUN_1001aaf3c(local_20,PTR_s_U_10088f528);
    FUN_10014ce64(param_1,local_28,local_20);
  }
  else if (cVar1 == '\x01') {
    FUN_1001aaf3c(local_28,PTR_s_X_Apple_TID_State_10088f4e8);
    FUN_1001aaf3c(local_20,PTR_s_E_10088f518);
    FUN_10014ce64(param_1,local_28,local_20);
  }
  else {
    FUN_1001aaf3c(local_28,PTR_s_X_Apple_TID_State_10088f4e8);
    FUN_1001aaf3c(local_20,PTR_s_D_10088f520);
    FUN_10014ce64(param_1,local_28,local_20);
  }
  FUN_1001ab006(local_20);
  FUN_1001ab006(local_28);
  return param_1;
}

