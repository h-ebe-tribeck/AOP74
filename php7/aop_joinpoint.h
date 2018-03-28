/*
  +----------------------------------------------------------------------+
  | PHP Version 7                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2016 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author:                                                              |
  +----------------------------------------------------------------------+
  */

#ifndef PHP_AOP_JOINPOINT_H
#define PHP_AOP_JOINPOINT_H

typedef struct {
    zend_object std;
    pointcut *current_pointcut;
    zend_array *advice;
    HashPosition pos;
    int kind_of_advice;
    zend_execute_data *ex;
    zend_object *exception;
    
    zval *args;
    int args_overloaded;

    zval *return_value;
} AopJoinpoint_object;

extern zend_class_entry *aop_joinpoint_ce;

void register_class_AopJoinPoint(void);

PHP_METHOD(AopJoinpoint, getArguments); //done
PHP_METHOD(AopJoinpoint, getPropertyName);
PHP_METHOD(AopJoinpoint, getPropertyValue);
PHP_METHOD(AopJoinpoint, setArguments);//done
PHP_METHOD(AopJoinpoint, getKindOfAdvice);//done
PHP_METHOD(AopJoinpoint, getReturnedValue);//done
PHP_METHOD(AopJoinpoint, getAssignedValue);
PHP_METHOD(AopJoinpoint, setReturnedValue);
PHP_METHOD(AopJoinpoint, setAssignedValue);
PHP_METHOD(AopJoinpoint, getPointcut);//done
PHP_METHOD(AopJoinpoint, getObject);//done
PHP_METHOD(AopJoinpoint, getClassName);//done
PHP_METHOD(AopJoinpoint, getMethodName);
PHP_METHOD(AopJoinpoint, getFunctionName);
PHP_METHOD(AopJoinpoint, getException);//done
PHP_METHOD(AopJoinpoint, process);//done

#endif


