#include <iostream>
using namespace std;
// DaoFactory DaoEmployee
// +- SQLServerFactory +- SQLServerEmployee
// +- OracleFactory    +- OracleEmployee
// DaoDepartment
// +- SQLServerDeparment
// +- OracleDepartment
// 员工记录
class Employee {
private:
public:

}; 
// 抽象产品A
class DaoEmployee {
public:
	virtual ~DaoEmployeee(void) {}
	virtual void insert(const Employee& employee) const = 0;
	virtual Employee select(int id) const = 0;
};


// 具体产品 A-1
class SQLServerEmployee : public DaoEmployee {
	void insert(const Employee& employee) const {
		cout << "SQL::insert" << endl;
	}

	Employee select(int id) const {
		cout << "SQL::select" << endl;
		return Employee();
	}
};

// 具体产品 A-2
class OracleEmployee : public DaoEmployee {
	void insert(const Employee& employee) const {
		cout << "Oracle::insert" << endl;
	}

	Employee select(int id) const {
		cout << "Orable::select" << endl;
		return Employee();
	}
};
// 部门记录
class Department {};

// 抽象产品B
class DaoDepartment {
	virtual ~DaoDepartment() {}
	virtual void insert(const Department& department) const = 0;
	virtual Department select(int id) const = 0;
};

// 具体产品 B-1
class SQLServerDepartment : public DaoDepartmnet {
public:
		void insert(const Department& department) const {
			cout << "SQL::insert" << endl;
		}

		Department select(int id) const {
			cout << "SQL::select" << endl;
			return Department();
		}
};
// 具体产品 B-2
class OracleDepartment : public DaoDepartmnet {
public:
		void insert(const Department& department) const {
			cout << "Oracle::insert" << endl;
		}

		Department select(int id) const {
			cout << "Oracle::select" << endl;
			return Department();
		}
};

class DaoFactory {
	
};
class Client {
private:
		const DaoFactory m_factory;
public:
		Client (const DaoFactory& factory) {}
		void business(void) const {
			Employee employee;
			DaoEmployee * daoEmployee = m_factory.createEmployee();	
			daoEmployee->insert(employee);
			employee = daoEmployee->select(1001);
			delete daoEmployee;
		}
};
int main(void) {
	return 0;
}

