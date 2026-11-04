// name: _getxattr
// address: 1006cec30

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _getxattr(char *path,char *name,void *value,size_t size,u_int32_t position,int options)

{
  ssize_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)PTR__getxattr_10082ce20)();
  return sVar1;
}

