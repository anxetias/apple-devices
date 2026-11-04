// name: FUN_1001b5c3a
// address: 1001b5c3a

bool FUN_1001b5c3a(long param_1)

{
  char cVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    cVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(long *)(param_1 + 0x48),PTR_s_isTemplate_10088c270);
    return cVar1 != '\0';
  }
  return false;
}

