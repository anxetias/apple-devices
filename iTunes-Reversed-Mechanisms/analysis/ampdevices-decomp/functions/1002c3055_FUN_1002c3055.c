// name: FUN_1002c3055
// address: 1002c3055

bool FUN_1002c3055(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    cVar1 = FUN_1001cd77d(PTR_cf_groupCompilationsInBrowse_100854a70,1,&cf_com_apple_Music);
    cVar1 = (cVar1 == '\0') + '\x01';
    *param_1 = cVar1;
  }
  return cVar1 == '\x01';
}

