// name: FUN_1004a58ac
// address: 1004a58ac

void FUN_1004a58ac(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = param_3;
  local_10 = param_1;
  local_c = param_2;
  if (DAT_1008bfa50 != (long *)0x0) {
    (**(code **)(*DAT_1008bfa50 + 0x30))(DAT_1008bfa50,&local_10,&local_c,&local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

