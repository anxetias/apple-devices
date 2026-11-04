// name: FUN_10039f656
// address: 10039f656

void FUN_10039f656(void *param_1,sqlite3 *param_2)

{
  int iVar1;
  
  iVar1 = _sqlite3_create_function
                    (param_2,"iPhoneSortKey",1,4,param_1,FUN_10039f6c8,(xStep *)0x0,(xFinal *)0x0);
  if (iVar1 == 0) {
    _sqlite3_create_function
              (param_2,"iPhoneSortSection",1,5,param_1,FUN_10039f89e,(xStep *)0x0,(xFinal *)0x0);
  }
  return;
}

