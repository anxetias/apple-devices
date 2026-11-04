// name: FUN_100597308
// address: 100597308

void FUN_100597308(undefined8 *param_1,sqlite3 *param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = _sqlite3_create_function
                    (param_2,"CFTimeRelativeToStartOfToday",1,1,param_1,FUN_10059737a,(xStep *)0x0,
                     (xFinal *)0x0);
  if (iVar1 == 0) {
    _sqlite3_create_function
              ((sqlite3 *)*param_1,"CFTimeRelativeToEndOfToday",1,1,param_1,FUN_1005973d0,
               (xStep *)0x0,(xFinal *)0x0);
  }
  return;
}

