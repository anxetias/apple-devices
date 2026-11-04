// name: FUN_1003a3194
// address: 1003a3194

void FUN_1003a3194(void)

{
  if (DAT_1008c7594 == 0) {
    DAT_1008c7594 = 0xb;
    if (DAT_1008c7910 != -1) {
      _dispatch_once(&DAT_1008c7910,&PTR___NSConcreteGlobalBlock_10086f7b8);
    }
    if (DAT_1008c7918 == '\x01') {
      DAT_1008c7594 = DAT_1008c7594 | 4;
      return;
    }
  }
  return;
}

