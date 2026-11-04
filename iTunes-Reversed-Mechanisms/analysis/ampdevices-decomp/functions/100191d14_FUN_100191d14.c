// name: FUN_100191d14
// address: 100191d14

void FUN_100191d14(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_60 = 0;
  if (param_5 == (code *)0x0) {
    local_40 = param_6;
    local_38 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(local_38,0x10);
    if (cVar1 != '\0') {
      FUN_10069466a(local_38);
    }
    FUN_1001782e9(0,0);
    param_6 = local_40;
  }
  local_60 = CONCAT44(local_60._4_4_,param_1);
  local_48 = param_4;
  if ((param_1 != -0x27) && (param_1 != 0)) {
    local_48 = 0;
  }
  if (param_5 != (code *)0x0) {
    local_58 = param_2;
    local_50 = param_3;
    (*param_5)(&local_60,param_6);
  }
  return;
}

