from django.shortcuts import render, redirect
from django.http import HttpResponse, HttpResponseRedirect
from crmapp.models import User

# Create your views here.
def show(request):
    # return HttpResponse("Hello Welcome to django")
    return render(request, 'index.html')
def display(request):
    user=User.objects.all()
    # return HttpResponse("Hello Welcome to django")
    return render(request, 'show.html', {'user':user})

def delete(request,id):
    u=User.objects.get(id=id)
    u.delete()
    return redirect('display')

def edit(request, id):
    u=User.objects.get(id=id)
    return render(request, 'edit.html',{'u':u})

def update(request, id):
    user=User.objects.get(id=id)
    user.uname=request.POST.get('uname')
    user.uemail=request.POST.get('uemail')
    user.upassword=request.POST.get('upassword')
    user.save()
    return redirect('/display')
def insert(request):
    en=User()
    en.uname=request.POST.get('uname')
    en.uemail=request.POST.get('uemail')
    en.upassword=request.POST.get('upassword')
    en.save()
    return redirect('/display')