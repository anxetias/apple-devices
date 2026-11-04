// name: FUN_10059729c
// address: 10059729c

void FUN_10059729c(undefined8 *param_1)

{
  if ((sqlite3 *)*param_1 != (sqlite3 *)0x0) {
    _sqlite3_create_function
              ((sqlite3 *)*param_1,"CFTimeRelativeToStartOfToday",1,1,param_1,(xFunc *)0x0,
               (xStep *)0x0,(xFinal *)0x0);
    _sqlite3_create_function
              ((sqlite3 *)*param_1,"CFTimeRelativeToEndOfToday",1,1,param_1,(xFunc *)0x0,
               (xStep *)0x0,(xFinal *)0x0);
  }
  *param_1 = 0;
  return;
}

