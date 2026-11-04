// name: _setxattr
// address: 1006cef66

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setxattr(char *path,char *name,void *value,size_t size,u_int32_t position,int options)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cef66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__setxattr_10082d180)();
  return iVar1;
}

