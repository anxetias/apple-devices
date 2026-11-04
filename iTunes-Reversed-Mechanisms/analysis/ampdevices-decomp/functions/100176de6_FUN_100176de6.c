// name: FUN_100176de6
// address: 100176de6

int FUN_100176de6(int *param_1,short param_2)

{
  char cVar1;
  undefined8 uVar2;
  int local_1c;
  
  local_1c = -1;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100682e1a(uVar2);
    }
    FUN_1001782e9(0,0);
    local_1c = -1;
  }
  else {
    FUN_10015bb96(*(undefined8 *)(param_1 + 6),0,0x63686170,(int)param_2,&local_1c);
    if (local_1c == 1) {
      local_1c = 0;
    }
  }
  return local_1c;
}

